/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcSectionModulusMeasure.h"

// TYPE IfcSectionModulusMeasure = REAL;
IfcSectionModulusMeasure::IfcSectionModulusMeasure() {}
IfcSectionModulusMeasure::IfcSectionModulusMeasure( double value ) { m_value = value; }
IfcSectionModulusMeasure::~IfcSectionModulusMeasure() {}
shared_ptr<BuildingObject> IfcSectionModulusMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSectionModulusMeasure> copy_self( new IfcSectionModulusMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcSectionModulusMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSECTIONMODULUSMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcSectionModulusMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcSectionModulusMeasure> IfcSectionModulusMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcSectionModulusMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcSectionModulusMeasure>(); }
	shared_ptr<IfcSectionModulusMeasure> type_object( new IfcSectionModulusMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}