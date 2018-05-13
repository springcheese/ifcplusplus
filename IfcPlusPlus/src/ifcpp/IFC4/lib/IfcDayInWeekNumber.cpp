/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDayInWeekNumber.h"

// TYPE IfcDayInWeekNumber = INTEGER;
IfcDayInWeekNumber::IfcDayInWeekNumber() {}
IfcDayInWeekNumber::IfcDayInWeekNumber( int value ) { m_value = value; }
IfcDayInWeekNumber::~IfcDayInWeekNumber() {}
shared_ptr<BuildingObject> IfcDayInWeekNumber::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcDayInWeekNumber> copy_self( new IfcDayInWeekNumber() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcDayInWeekNumber::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCDAYINWEEKNUMBER("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcDayInWeekNumber::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcDayInWeekNumber> IfcDayInWeekNumber::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcDayInWeekNumber>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcDayInWeekNumber>(); }
	shared_ptr<IfcDayInWeekNumber> type_object( new IfcDayInWeekNumber() );
	readInteger( arg, type_object->m_value );
	return type_object;
}