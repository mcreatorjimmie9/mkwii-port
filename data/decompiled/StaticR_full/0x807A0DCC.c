/* Function at 0x807A0DCC, size=64 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

void FUN_807A0DCC(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* lis r4, 0 */ // 0x807A0DD4
    /* lis r3, 0 */ // 0x807A0DD8
    *(0x34 + r1) = r0; // stw @ 0x807A0DDC
    r5 = r4 + 0; // 0x807A0DE0
    /* stmw r24, 0x10(r1) */ // 0x807A0DE4
    /* li r29, 0 */ // 0x807A0DE8
    *(0 + r4) = r29; // stw @ 0x807A0DEC
    /* li r4, 1 */ // 0x807A0DF0
    r3 = *(0 + r3); // lwz @ 0x807A0DF4
    *(4 + r5) = r29; // stw @ 0x807A0DF8
    *(8 + r5) = r29; // stw @ 0x807A0DFC
    *(0xc + r5) = r29; // stw @ 0x807A0E00
    r3 = *(0x5bc + r3); // lwz @ 0x807A0E04
    FUN_805E3430(); // bl 0x805E3430
}