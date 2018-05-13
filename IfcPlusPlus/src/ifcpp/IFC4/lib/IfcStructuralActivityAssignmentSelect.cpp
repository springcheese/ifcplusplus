/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcStructuralActivityAssignmentSelect.h"

// TYPE IfcStructuralActivityAssignmentSelect = SELECT	(IfcElement	,IfcStructuralItem);
shared_ptr<IfcStructuralActivityAssignmentSelect> IfcStructuralActivityAssignmentSelect::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.size() == 0 ){ return shared_ptr<IfcStructuralActivityAssignmentSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcStructuralActivityAssignmentSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcStructuralActivityAssignmentSelect>();
	}
	shared_ptr<IfcStructuralActivityAssignmentSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}