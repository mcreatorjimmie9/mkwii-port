/* Function at 0x8087788C, size=156 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_8087788C(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    *(0xdc + r1) = r31; // stw @ 0x80877898
    r31 = r3;
    FUN_80876FEC(); // bl 0x80876FEC
    /* lis r4, 0 */ // 0x808778A4
    r0 = r3 rlwinm 2; // rlwinm
    r4 = *(0 + r4); // lwz @ 0x808778AC
    r4 = *(0xc + r4); // lwz @ 0x808778B4
    /* lwzx r4, r4, r0 */ // 0x808778B8
    r0 = *(0x22 + r4); // lhz @ 0x808778BC
    *(0x198 + r31) = r0; // stw @ 0x808778C0
    FUN_80654ECC(r3); // bl 0x80654ECC
    r0 = *(0x198 + r31); // lwz @ 0x808778C8
    r3 = r31;
    *(8 + r1) = r0; // stw @ 0x808778D0
    FUN_80876FEC(r3); // bl 0x80876FEC
    /* clrlwi r0, r3, 0x18 */ // 0x808778D8
    /* lis r3, 0 */ // 0x808778DC
    /* mulli r0, r0, 0xf0 */ // 0x808778E0
    r4 = *(0 + r3); // lwz @ 0x808778E4
    r3 = r31;
    r4 = r4 + r0; // 0x808778F0
    r0 = *(0xf4 + r4); // lwz @ 0x808778F4
    /* cntlzw r0, r0 */ // 0x808778F8
    r0 = r0 rlwinm 0x1b; // rlwinm
    /* neg r4, r0 */ // 0x80877900
    r4 = r4 + 0x76d; // 0x80877904
    FUN_806A0A34(r4); // bl 0x806A0A34
    r3 = r31;
    FUN_806A0740(r4, r3); // bl 0x806A0740
    r0 = *(0xe4 + r1); // lwz @ 0x80877914
    r31 = *(0xdc + r1); // lwz @ 0x80877918
    return;
}