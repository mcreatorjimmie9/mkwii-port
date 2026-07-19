/* Function at 0x8087F79C, size=264 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 11 function(s) */

int FUN_8087F79C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    /* li r4, 3 */ // 0x8087F7B0
    *(0x18 + r1) = r30; // stw @ 0x8087F7B4
    *(0x14 + r1) = r29; // stw @ 0x8087F7B8
    r29 = r3;
    r3 = r3 + 0x98; // 0x8087F7C0
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r30, 0 */ // 0x8087F7C8
    /* li r4, 0 */ // 0x8087F7CC
    /* lfs f1, 0(r30) */ // 0x8087F7D0
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = r29 + 0x98; // 0x8087F7D8
    /* li r4, 2 */ // 0x8087F7DC
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r30) */ // 0x8087F7E4
    /* li r4, 1 */ // 0x8087F7E8
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    /* lis r3, 0 */ // 0x8087F7F0
    r5 = *(0 + r3); // lwz @ 0x8087F7F4
    r0 = *(0xb90 + r5); // lwz @ 0x8087F7F8
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8087F7FC
    if (==) goto 0x0x8087f844;
    /* clrlwi r0, r31, 0x18 */ // 0x8087F804
    r3 = r29 + 0x98; // 0x8087F808
    /* mulli r0, r0, 0xf0 */ // 0x8087F80C
    /* li r4, 4 */ // 0x8087F810
    r5 = r5 + r0; // 0x8087F814
    r6 = *(0xf4 + r5); // lwz @ 0x8087F818
    r5 = r6 + -1; // 0x8087F81C
    /* subfic r0, r6, 1 */ // 0x8087F820
    r0 = r5 ~| r0; // 0x8087F824
    r5 = r0 >> 0x1f; // srawi
    r31 = r5 + 6; // 0x8087F82C
    FUN_8069F4A0(r5); // bl 0x8069F4A0
    /* lfs f1, 0(r30) */ // 0x8087F834
    r4 = r31;
    FUN_8069F59C(r4); // bl 0x8069F59C
    /* b 0x8087f86c */ // 0x8087F840
    r3 = r5;
    /* clrlwi r4, r31, 0x18 */ // 0x8087F848
    FUN_805C1470(r4, r3); // bl 0x805C1470
    r31 = r3;
    r3 = r29 + 0x98; // 0x8087F854
    /* li r4, 4 */ // 0x8087F858
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r30) */ // 0x8087F860
    /* extsb r4, r31 */ // 0x8087F864
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = r29 + 0x98; // 0x8087F86C
    /* li r4, 3 */ // 0x8087F870
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8087F878
    /* li r4, 0 */ // 0x8087F87C
    /* lfs f1, 0(r5) */ // 0x8087F880
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r0 = *(0x24 + r1); // lwz @ 0x8087F888
    r31 = *(0x1c + r1); // lwz @ 0x8087F88C
    r30 = *(0x18 + r1); // lwz @ 0x8087F890
    r29 = *(0x14 + r1); // lwz @ 0x8087F894
    return;
}