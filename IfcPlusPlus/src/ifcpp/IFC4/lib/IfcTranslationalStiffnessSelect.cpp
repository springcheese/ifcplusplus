/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcLinearStiffnessMeasure.h"
#include "ifcpp/IFC4/include/IfcTranslationalStiffnessSelect.h"

// TYPE IfcTranslationalStiffnessSelect = SELECT	(IfcBoolean	,IfcLinearStiffnessMeasure);
shared_ptr<IfcTranslationalStiffnessSelect> IfcTranslationalStiffnessSelect::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.size() == 0 ){ return shared_ptr<IfcTranslationalStiffnessSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcTranslationalStiffnessSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcTranslationalStiffnessSelect>();
	}
	shared_ptr<IfcTranslationalStiffnessSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}