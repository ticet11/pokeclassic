PalletTown_Mart_MapScripts::
	.byte 0


PalletTown_EventScript_NewMart::
	lock
	faceplayer
	msgbox PalletTown_EventScript_NewMart_Text_0
	release
	return


PalletTown_EventScript_NewMart_Text_0:
	.string "Sorry, we haven't opened yet.$"
