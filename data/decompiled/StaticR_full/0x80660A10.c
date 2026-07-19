/* Function at 0x80660A10, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80660A10(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80660A1C
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x80660A28
    r3 = r31 + 0x174; // 0x80660A2C
    r4 = r4 + 0; // 0x80660A30
    *(0 + r31) = r4; // stw @ 0x80660A34
    FUN_8066D634(r4, r3, r4); // bl 0x8066D634
    r0 = *(0x248 + r31); // lwz @ 0x80660A3C
    /* li r5, 0 */ // 0x80660A40
    /* li r4, 1 */ // 0x80660A44
    /* lis r3, 0 */ // 0x80660A48
    /* clrlwi r0, r0, 9 */ // 0x80660A4C
    /* lfs f0, 0(r3) */ // 0x80660A50
    r0 = r4 rlwimi 0x14; // rlwimi
    *(0x230 + r31) = r5; // stw @ 0x80660A58
    r0 = r0 | 8; // 0x80660A5C
    r3 = r31;
    *(0x248 + r31) = r0; // stw @ 0x80660A64
    r0 = r0 rlwinm 0; // rlwinm
    *(0x238 + r31) = r5; // sth @ 0x80660A6C
    *(0x23a + r31) = r5; // sth @ 0x80660A70
    /* stfs f0, 0x23c(r31) */ // 0x80660A74
    /* stfs f0, 0x240(r31) */ // 0x80660A78
    *(0x244 + r31) = r5; // sth @ 0x80660A7C
    *(0x234 + r31) = r5; // stw @ 0x80660A80
    *(0x248 + r31) = r0; // stw @ 0x80660A84
    *(0x246 + r31) = r5; // sth @ 0x80660A88
    r31 = *(0xc + r1); // lwz @ 0x80660A8C
    r0 = *(0x14 + r1); // lwz @ 0x80660A90
    return;
}