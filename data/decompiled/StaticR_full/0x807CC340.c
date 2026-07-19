/* Function at 0x807CC340, size=20 bytes */
/* Stack frame: 368 bytes */
/* Calls: 1 function(s) */

void FUN_807CC340(void)
{
    /* Stack frame: -368(r1) */
    *(0x174 + r1) = r0; // stw @ 0x807CC348
    FUN_805E3430(); // bl 0x805E3430
}