SecretGarden_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SecretGarden_OnTransition
	.byte 0

SecretGarden_OnTransition:
	setrespawn HEAL_LOCATION_SECRET_GARDEN
	end
