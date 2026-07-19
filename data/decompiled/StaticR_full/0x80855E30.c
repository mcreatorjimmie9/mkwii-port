/* Function at 0x80855E30, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80855E30(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x80855E3C
    *(0xc + r1) = r31; // stw @ 0x80855E40
    r31 = r4;
    if (>=) goto 0x0x80855eb8;
    FUN_8061E2E8(); // bl 0x8061E2E8
    r0 = r3 + -1; // 0x80855E50
    /* li r4, 0 */ // 0x80855E54
    /* cntlzw r0, r0 */ // 0x80855E58
    /* rlwinm. r0, r0, 0x1b, 5, 0x1f */ // 0x80855E5C
    if (!=) goto 0x0x80855e84;
    /* mulli r0, r31, 0x18 */ // 0x80855E64
    /* lis r3, 0 */ // 0x80855E68
    r3 = r3 + 0; // 0x80855E6C
    r3 = r3 + r0; // 0x80855E70
    r0 = *(4 + r3); // lwz @ 0x80855E74
    if (==) goto 0x0x80855e84;
    /* li r4, 1 */ // 0x80855E80
    if (==) goto 0x0x80855ea4;
    /* mulli r0, r31, 0x18 */ // 0x80855E8C
    /* lis r3, 0 */ // 0x80855E90
    r3 = r3 + 0; // 0x80855E94
    r3 = r3 + r0; // 0x80855E98
    r3 = *(4 + r3); // lwz @ 0x80855E9C
    /* b 0x80855ec4 */ // 0x80855EA0
    /* mulli r0, r31, 0x18 */ // 0x80855EA4
    /* lis r3, 0 */ // 0x80855EA8
    r3 = r3 + 0; // 0x80855EAC
    /* lwzx r3, r3, r0 */ // 0x80855EB0
    /* b 0x80855ec4 */ // 0x80855EB4
    /* lis r3, 0 */ // 0x80855EB8
    r3 = r3 + 0; // 0x80855EBC
    r3 = r3 + 0x11e; // 0x80855EC0
    r0 = *(0x14 + r1); // lwz @ 0x80855EC4
    r31 = *(0xc + r1); // lwz @ 0x80855EC8
    return;
}