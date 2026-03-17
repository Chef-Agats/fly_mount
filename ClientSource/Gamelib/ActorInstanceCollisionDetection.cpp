
Arat

bool CActorInstance::CanSkipCollision()
{ // Sonrasına yapiştir


Altına ekle


#ifdef UCAN_INEK
	if (ucanınek_z > 0.0f)
		return true;
#endif


Arat

BOOL CActorInstance::TestPhysicsBlendingCollision(CActorInstance & rVictim)
{
	if (rVictim.IsDead())
		return FALSE;
	


Altına ekle

#ifdef UCAN_INEK
if (ucanınek_z > 0.0f)
	return FALSE;
#endif



Arat 

BOOL CActorInstance::__TestObjectCollision(const CGraphicObjectInstance * c_pObjectInstance)
{
	if (m_pkHorse)
	{
		if (m_pkHorse->__TestObjectCollision(c_pObjectInstance))
			return TRUE;

		return FALSE;
	}
	
	
	
#ifdef UCAN_INEK
	if (ucanınek_z > 0.0f)
		return FALSE;
#endif