/* Function at 0x808D680C, size=144 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808D680C(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    *(0xdc + r1) = r31; // stw @ 0x808D6818
    r31 = r3;
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x808D6828
    r3 = *(0 + r3); // lwz @ 0x808D682C
    r0 = *(0x291c + r3); // lwz @ 0x808D6830
    /* mulli r0, r0, 0x58 */ // 0x808D6834
    r3 = r3 + r0; // 0x808D6838
    r3 = *(0x44 + r3); // lwz @ 0x808D683C
    *(8 + r1) = r3; // stw @ 0x808D6840
    if (>=) goto 0x0x808d6854;
    /* li r3, 2 */ // 0x808D684C
    /* b 0x808d6860 */ // 0x808D6850
    if (<=) goto 0x0x808d6860;
    /* li r3, 0xc */ // 0x808D685C
    *(8 + r1) = r3; // stw @ 0x808D6860
    r0 = *(0x19c + r31); // lwz @ 0x808D6864
    if (==) goto 0x0x808d6888;
    r4 = *(0x198 + r31); // lwz @ 0x808D6870
    r3 = r31;
    FUN_806A0A34(r3, r5); // bl 0x806A0A34
    r0 = *(8 + r1); // lwz @ 0x808D6880
    *(0x19c + r31) = r0; // stw @ 0x808D6884
    r0 = *(0xe4 + r1); // lwz @ 0x808D6888
    r31 = *(0xdc + r1); // lwz @ 0x808D688C
    return;
}