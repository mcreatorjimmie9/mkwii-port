/* Function at 0x807D61DC, size=24 bytes */
/* Stack frame: 48 bytes */
/* Calls: 1 function(s) */

void FUN_807D61DC(int r3)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x807D61E4
    r3 = *(4 + r3); // lwz @ 0x807D61E8
    r3 = *(0 + r3); // lwz @ 0x807D61EC
    FUN_8061DA88(); // bl 0x8061DA88
}