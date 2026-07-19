/* Function at 0x80808214, size=20 bytes */
/* Stack frame: 112 bytes */
/* Calls: 1 function(s) */

void FUN_80808214(void)
{
    /* Stack frame: -112(r1) */
    *(0x74 + r1) = r0; // stw @ 0x8080821C
    FUN_805E3430(); // bl 0x805E3430
}