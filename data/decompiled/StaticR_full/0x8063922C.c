/* Function at 0x8063922C, size=20 bytes */
/* Stack frame: 224 bytes */
/* Calls: 1 function(s) */

void FUN_8063922C(void)
{
    /* Stack frame: -224(r1) */
    *(0xe4 + r1) = r0; // stw @ 0x80639234
    FUN_805E3430(); // bl 0x805E3430
}