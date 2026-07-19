/* Function at 0x80837F90, size=204 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80837F90(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80837F9C
    r31 = r3;
    r5 = *(0xc + r4); // lwz @ 0x80837FA4
    r0 = *(0xc + r5); // lhz @ 0x80837FA8
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x80837FAC
    if (==) goto 0x0x80838000;
    /* lis r6, 0 */ // 0x80837FB4
    /* lis r5, 0 */ // 0x80837FB8
    r8 = *(0 + r6); // lbz @ 0x80837FBC
    /* li r6, 0 */ // 0x80837FC0
    /* lfs f1, 0(r5) */ // 0x80837FC4
    /* li r7, 0 */ // 0x80837FC8
    /* neg r0, r8 */ // 0x80837FCC
    r0 = r0 | r8; // 0x80837FD0
    r5 = r0 >> 0x1f; // srawi
    r5 = r5 + 4; // 0x80837FD8
    FUN_8083A7B8(r7, r5); // bl 0x8083A7B8
    /* lfs f2, 0x50(r31) */ // 0x80837FE0
    /* li r3, 0 */ // 0x80837FE4
    /* lfs f1, 0x54(r31) */ // 0x80837FE8
    /* lfs f0, 0x58(r31) */ // 0x80837FEC
    /* stfs f2, 0x1e0(r31) */ // 0x80837FF0
    /* stfs f1, 0x1e4(r31) */ // 0x80837FF4
    /* stfs f0, 0x1e8(r31) */ // 0x80837FF8
    /* b 0x80838048 */ // 0x80837FFC
    /* lis r6, 0 */ // 0x80838000
    /* li r5, 9 */ // 0x80838004
    r0 = *(0 + r6); // lbz @ 0x80838008
    if (==) goto 0x0x80838018;
    /* li r5, 7 */ // 0x80838014
    /* lis r6, 0 */ // 0x80838018
    /* li r7, 0 */ // 0x8083801C
    /* lfs f1, 0(r6) */ // 0x80838020
    /* li r6, 1 */ // 0x80838024
    FUN_8083A7B8(r5, r6, r7, r6); // bl 0x8083A7B8
    /* lfs f2, 0x50(r31) */ // 0x8083802C
    /* li r3, 1 */ // 0x80838030
    /* lfs f1, 0x54(r31) */ // 0x80838034
    /* lfs f0, 0x58(r31) */ // 0x80838038
    /* stfs f2, 0x1e0(r31) */ // 0x8083803C
    /* stfs f1, 0x1e4(r31) */ // 0x80838040
    /* stfs f0, 0x1e8(r31) */ // 0x80838044
    r0 = *(0x14 + r1); // lwz @ 0x80838048
    r31 = *(0xc + r1); // lwz @ 0x8083804C
    return;
}