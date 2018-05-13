/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcElectricFlowStorageDeviceTypeEnum.h"

// TYPE IfcElectricFlowStorageDeviceTypeEnum = ENUMERATION OF	(BATTERY	,CAPACITORBANK	,HARMONICFILTER	,INDUCTORBANK	,UPS	,USERDEFINED	,NOTDEFINED);
IfcElectricFlowStorageDeviceTypeEnum::IfcElectricFlowStorageDeviceTypeEnum() {}
IfcElectricFlowStorageDeviceTypeEnum::~IfcElectricFlowStorageDeviceTypeEnum() {}
shared_ptr<BuildingObject> IfcElectricFlowStorageDeviceTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcElectricFlowStorageDeviceTypeEnum> copy_self( new IfcElectricFlowStorageDeviceTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcElectricFlowStorageDeviceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCELECTRICFLOWSTORAGEDEVICETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BATTERY:	stream << ".BATTERY."; break;
		case ENUM_CAPACITORBANK:	stream << ".CAPACITORBANK."; break;
		case ENUM_HARMONICFILTER:	stream << ".HARMONICFILTER."; break;
		case ENUM_INDUCTORBANK:	stream << ".INDUCTORBANK."; break;
		case ENUM_UPS:	stream << ".UPS."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcElectricFlowStorageDeviceTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_BATTERY:	return L"BATTERY";
		case ENUM_CAPACITORBANK:	return L"CAPACITORBANK";
		case ENUM_HARMONICFILTER:	return L"HARMONICFILTER";
		case ENUM_INDUCTORBANK:	return L"INDUCTORBANK";
		case ENUM_UPS:	return L"UPS";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcElectricFlowStorageDeviceTypeEnum> IfcElectricFlowStorageDeviceTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcElectricFlowStorageDeviceTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcElectricFlowStorageDeviceTypeEnum>(); }
	shared_ptr<IfcElectricFlowStorageDeviceTypeEnum> type_object( new IfcElectricFlowStorageDeviceTypeEnum() );
	if( boost::iequals( arg, L".BATTERY." ) )
	{
		type_object->m_enum = IfcElectricFlowStorageDeviceTypeEnum::ENUM_BATTERY;
	}
	else if( boost::iequals( arg, L".CAPACITORBANK." ) )
	{
		type_object->m_enum = IfcElectricFlowStorageDeviceTypeEnum::ENUM_CAPACITORBANK;
	}
	else if( boost::iequals( arg, L".HARMONICFILTER." ) )
	{
		type_object->m_enum = IfcElectricFlowStorageDeviceTypeEnum::ENUM_HARMONICFILTER;
	}
	else if( boost::iequals( arg, L".INDUCTORBANK." ) )
	{
		type_object->m_enum = IfcElectricFlowStorageDeviceTypeEnum::ENUM_INDUCTORBANK;
	}
	else if( boost::iequals( arg, L".UPS." ) )
	{
		type_object->m_enum = IfcElectricFlowStorageDeviceTypeEnum::ENUM_UPS;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcElectricFlowStorageDeviceTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcElectricFlowStorageDeviceTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}