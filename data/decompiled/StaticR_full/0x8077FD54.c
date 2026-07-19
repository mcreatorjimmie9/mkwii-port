/* Function at 0x8077FD54, size=112 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8077FD54(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x58 + r1) = r30; // stw @ 0x8077FD68
    /* lis r30, 0 */ // 0x8077FD6C
    r30 = r30 + 0; // 0x8077FD70
    *(0x54 + r1) = r29; // stw @ 0x8077FD74
    /* lfs f1, 0(r30) */ // 0x8077FD78
    r5 = *(0x20 + r3); // lwz @ 0x8077FD7C
    r4 = *(0xb4 + r3); // lwz @ 0x8077FD80
    r0 = *(0x48 + r5); // lha @ 0x8077FD84
    /* slwi r0, r0, 2 */ // 0x8077FD88
    /* lfsx f0, r4, r0 */ // 0x8077FD8C
    /* fcmpu cr0, f1, f0 */ // 0x8077FD90
    /* mfcr r3 */ // 0x8077FD94
    r4 = *(0x24 + r5); // lwz @ 0x8077FD98
    r0 = *(0x28 + r5); // lwz @ 0x8077FD9C
    r3 = r3 rlwinm 3; // rlwinm
    *(0x48 + r1) = r0; // stw @ 0x8077FDA4
    /* xori r29, r3, 1 */ // 0x8077FDA8
    *(0x44 + r1) = r4; // stw @ 0x8077FDB0
    r0 = *(0x2c + r5); // lwz @ 0x8077FDB4
    *(0x4c + r1) = r0; // stw @ 0x8077FDB8
    /* stfs f1, 0x48(r1) */ // 0x8077FDBC
    FUN_805E3430(r3); // bl 0x805E3430
}