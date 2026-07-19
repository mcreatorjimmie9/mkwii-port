/* Function at 0x808D6758, size=180 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808D6758(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x808D6760
    *(0xe4 + r1) = r0; // stw @ 0x808D6764
    *(0xdc + r1) = r31; // stw @ 0x808D6768
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x808D6770
    r4 = *(0 + r4); // lwz @ 0x808D6774
    r0 = *(0 + r4); // lwz @ 0x808D6778
    if (<) goto 0x0x808d678c;
    if (<=) goto 0x0x808d67a0;
    if (<) goto 0x0x808d67b4;
    if (<=) goto 0x0x808d67ac;
    /* b 0x808d67b4 */ // 0x808D679C
    /* li r0, 0x53a */ // 0x808D67A0
    *(0x198 + r3) = r0; // stw @ 0x808D67A4
    /* b 0x808d67b4 */ // 0x808D67A8
    /* li r0, 0x53b */ // 0x808D67AC
    *(0x198 + r3) = r0; // stw @ 0x808D67B0
    /* lis r4, 0 */ // 0x808D67B4
    r4 = *(0 + r4); // lwz @ 0x808D67B8
    r0 = *(0x291c + r4); // lwz @ 0x808D67BC
    /* mulli r0, r0, 0x58 */ // 0x808D67C0
    r4 = r4 + r0; // 0x808D67C4
    r0 = *(0x44 + r4); // lwz @ 0x808D67C8
    *(0x19c + r3) = r0; // stw @ 0x808D67CC
    FUN_80654ECC(r3); // bl 0x80654ECC
    r0 = *(0x19c + r31); // lwz @ 0x808D67D8
    r3 = r31;
    *(8 + r1) = r0; // stw @ 0x808D67E0
    r4 = *(0x198 + r31); // lwz @ 0x808D67E8
    FUN_806A0A34(r3, r5); // bl 0x806A0A34
    r3 = r31;
    FUN_80876EDC(r5, r3); // bl 0x80876EDC
    r0 = *(0xe4 + r1); // lwz @ 0x808D67F8
    r31 = *(0xdc + r1); // lwz @ 0x808D67FC
    return;
}