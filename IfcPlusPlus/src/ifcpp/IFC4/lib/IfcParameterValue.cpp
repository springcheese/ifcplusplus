/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcMeasureValue.h"
#include "ifcpp/IFC4/include/IfcTrimmingSelect.h"
#include "ifcpp/IFC4/include/IfcParameterValue.h"

// TYPE IfcParameterValue = REAL;
IfcParameterValue::IfcParameterValue() {}
IfcParameterValue::IfcParameterValue( double value ) { m_value = value; }
IfcParameterValue::~IfcParameterValue() {}
shared_ptr<BuildingObject> IfcParameterValue::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcParameterValue> copy_self( new IfcParameterValue() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcParameterValue::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPARAMETERVALUE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcParameterValue::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcParameterValue> IfcParameterValue::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcParameterValue>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcParameterValue>(); }
	shared_ptr<IfcParameterValue> type_object( new IfcParameterValue() );
	readReal( arg, type_object->m_value );
	return type_object;
}