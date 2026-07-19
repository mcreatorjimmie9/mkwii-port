/* Function at 0x806CB7B4, size=20 bytes */
/* Stack frame: 288 bytes */
/* Calls: 1 function(s) */

void FUN_806CB7B4(void)
{
    /* Stack frame: -288(r1) */
    *(0x124 + r1) = r0; // stw @ 0x806CB7BC
    FUN_805E3430(); // bl 0x805E3430
}