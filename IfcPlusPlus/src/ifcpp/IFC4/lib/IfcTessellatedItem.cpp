/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"
#include "ifcpp/IFC4/include/IfcTessellatedItem.h"

// ENTITY IfcTessellatedItem 
IfcTessellatedItem::IfcTessellatedItem() {}
IfcTessellatedItem::IfcTessellatedItem( int id ) { m_entity_id = id; }
IfcTessellatedItem::~IfcTessellatedItem() {}
shared_ptr<BuildingObject> IfcTessellatedItem::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTessellatedItem> copy_self( new IfcTessellatedItem() );
	return copy_self;
}
void IfcTessellatedItem::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCTESSELLATEDITEM" << "(";
	stream << ");";
}
void IfcTessellatedItem::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcTessellatedItem::toString() const { return L"IfcTessellatedItem"; }
void IfcTessellatedItem::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
}
void IfcTessellatedItem::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcGeometricRepresentationItem::getAttributes( vec_attributes );
}
void IfcTessellatedItem::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcGeometricRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IfcTessellatedItem::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcGeometricRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IfcTessellatedItem::unlinkFromInverseCounterparts()
{
	IfcGeometricRepresentationItem::unlinkFromInverseCounterparts();
}