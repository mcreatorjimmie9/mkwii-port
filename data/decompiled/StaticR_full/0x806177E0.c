/* Function at 0x806177E0, size=20 bytes */
/* Stack frame: 352 bytes */
/* Calls: 1 function(s) */

void FUN_806177E0(void)
{
    /* Stack frame: -352(r1) */
    *(0x164 + r1) = r0; // stw @ 0x806177E8
    FUN_805E3430(); // bl 0x805E3430
}