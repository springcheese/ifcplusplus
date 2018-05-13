/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcProductRepresentation.h"
#include "ifcpp/IFC4/include/IfcRepresentationContext.h"
#include "ifcpp/IFC4/include/IfcRepresentationItem.h"
#include "ifcpp/IFC4/include/IfcRepresentationMap.h"
#include "ifcpp/IFC4/include/IfcShapeAspect.h"
#include "ifcpp/IFC4/include/IfcShapeModel.h"

// ENTITY IfcShapeModel 
IfcShapeModel::IfcShapeModel() {}
IfcShapeModel::IfcShapeModel( int id ) { m_entity_id = id; }
IfcShapeModel::~IfcShapeModel() {}
shared_ptr<BuildingObject> IfcShapeModel::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcShapeModel> copy_self( new IfcShapeModel() );
	if( m_ContextOfItems )
	{
		if( options.shallow_copy_IfcRepresentationContext ) { copy_self->m_ContextOfItems = m_ContextOfItems; }
		else { copy_self->m_ContextOfItems = dynamic_pointer_cast<IfcRepresentationContext>( m_ContextOfItems->getDeepCopy(options) ); }
	}
	if( m_RepresentationIdentifier ) { copy_self->m_RepresentationIdentifier = dynamic_pointer_cast<IfcLabel>( m_RepresentationIdentifier->getDeepCopy(options) ); }
	if( m_RepresentationType ) { copy_self->m_RepresentationType = dynamic_pointer_cast<IfcLabel>( m_RepresentationType->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_Items.size(); ++ii )
	{
		auto item_ii = m_Items[ii];
		if( item_ii )
		{
			copy_self->m_Items.push_back( dynamic_pointer_cast<IfcRepresentationItem>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcShapeModel::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCSHAPEMODEL" << "(";
	if( m_ContextOfItems ) { stream << "#" << m_ContextOfItems->m_entity_id; } else { stream << "*"; }
	stream << ",";
	if( m_RepresentationIdentifier ) { m_RepresentationIdentifier->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_RepresentationType ) { m_RepresentationType->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	writeEntityList( stream, m_Items );
	stream << ");";
}
void IfcShapeModel::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcShapeModel::toString() const { return L"IfcShapeModel"; }
void IfcShapeModel::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcShapeModel, expecting 4, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_ContextOfItems, map );
	m_RepresentationIdentifier = IfcLabel::createObjectFromSTEP( args[1], map );
	m_RepresentationType = IfcLabel::createObjectFromSTEP( args[2], map );
	readEntityReferenceList( args[3], m_Items, map );
}
void IfcShapeModel::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcRepresentation::getAttributes( vec_attributes );
}
void IfcShapeModel::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcRepresentation::getAttributesInverse( vec_attributes_inverse );
	if( m_OfShapeAspect_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> OfShapeAspect_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_OfShapeAspect_inverse.size(); ++i )
		{
			if( !m_OfShapeAspect_inverse[i].expired() )
			{
				OfShapeAspect_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcShapeAspect>( m_OfShapeAspect_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "OfShapeAspect_inverse", OfShapeAspect_inverse_vec_obj ) );
	}
}
void IfcShapeModel::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRepresentation::setInverseCounterparts( ptr_self_entity );
}
void IfcShapeModel::unlinkFromInverseCounterparts()
{
	IfcRepresentation::unlinkFromInverseCounterparts();
}