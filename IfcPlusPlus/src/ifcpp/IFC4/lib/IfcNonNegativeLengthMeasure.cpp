/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcMeasureValue.h"
#include "ifcpp/IFC4/include/IfcNonNegativeLengthMeasure.h"

// TYPE IfcNonNegativeLengthMeasure = IfcLengthMeasure;
IfcNonNegativeLengthMeasure::IfcNonNegativeLengthMeasure() {}
IfcNonNegativeLengthMeasure::~IfcNonNegativeLengthMeasure() {}
shared_ptr<BuildingObject> IfcNonNegativeLengthMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcNonNegativeLengthMeasure> copy_self( new IfcNonNegativeLengthMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcNonNegativeLengthMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCNONNEGATIVELENGTHMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcNonNegativeLengthMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcNonNegativeLengthMeasure> IfcNonNegativeLengthMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcNonNegativeLengthMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcNonNegativeLengthMeasure>(); }
	shared_ptr<IfcNonNegativeLengthMeasure> type_object( new IfcNonNegativeLengthMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}