/* Function at 0x807A07F4, size=76 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 2 function(s) */

void FUN_807A07F4(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* lis r3, 0 */ // 0x807A07FC
    *(0x34 + r1) = r0; // stw @ 0x807A0800
    /* stmw r24, 0x10(r1) */ // 0x807A0804
    r3 = *(0 + r3); // lwz @ 0x807A0808
    FUN_80787B48(r3); // bl 0x80787B48
    /* lis r4, 0 */ // 0x807A0810
    /* lis r3, 0 */ // 0x807A0814
    r5 = r4 + 0; // 0x807A0818
    /* li r29, 0 */ // 0x807A081C
    *(0 + r4) = r29; // stw @ 0x807A0820
    /* li r4, 1 */ // 0x807A0824
    r3 = *(0 + r3); // lwz @ 0x807A0828
    *(4 + r5) = r29; // stw @ 0x807A082C
    *(8 + r5) = r29; // stw @ 0x807A0830
    *(0xc + r5) = r29; // stw @ 0x807A0834
    r3 = *(0x5bc + r3); // lwz @ 0x807A0838
    FUN_805E3430(); // bl 0x805E3430
}