/* Function at 0x807A301C, size=76 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 2 function(s) */

void FUN_807A301C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* lis r3, 0 */ // 0x807A3024
    *(0x34 + r1) = r0; // stw @ 0x807A3028
    /* stmw r24, 0x10(r1) */ // 0x807A302C
    r3 = *(0 + r3); // lwz @ 0x807A3030
    FUN_80787B48(r3); // bl 0x80787B48
    /* lis r4, 0 */ // 0x807A3038
    /* lis r3, 0 */ // 0x807A303C
    r5 = r4 + 0; // 0x807A3040
    /* li r29, 0 */ // 0x807A3044
    *(0 + r4) = r29; // stw @ 0x807A3048
    /* li r4, 1 */ // 0x807A304C
    r3 = *(0 + r3); // lwz @ 0x807A3050
    *(4 + r5) = r29; // stw @ 0x807A3054
    *(8 + r5) = r29; // stw @ 0x807A3058
    *(0xc + r5) = r29; // stw @ 0x807A305C
    r3 = *(0x5bc + r3); // lwz @ 0x807A3060
    FUN_805E3430(); // bl 0x805E3430
}