/* Function at 0x80908CDC, size=20 bytes */
/* Stack frame: 112 bytes */
/* Calls: 1 function(s) */

void FUN_80908CDC(void)
{
    /* Stack frame: -112(r1) */
    *(0x74 + r1) = r0; // stw @ 0x80908CE4
    FUN_805E3430(); // bl 0x805E3430
}