/* Function at 0x807A404C, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_807A404C(int r3, int r6)
{
    /* Stack frame: -16(r1) */
    /* li r6, 0 */ // 0x807A4054
    *(0x14 + r1) = r0; // stw @ 0x807A4058
    r3 = *(0x4c4 + r3); // lwz @ 0x807A405C
    r3 = r3 + 0xc; // 0x807A4060
    FUN_805E3430(r6, r3); // bl 0x805E3430
}