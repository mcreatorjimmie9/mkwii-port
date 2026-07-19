/* Function at 0x8087F8A4, size=244 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 10 function(s) */

int FUN_8087F8A4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    /* li r4, 2 */ // 0x8087F8BC
    *(0x14 + r1) = r29; // stw @ 0x8087F8C0
    r29 = r3;
    r3 = r3 + 0x98; // 0x8087F8C8
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x8087F8D0
    /* li r4, 0 */ // 0x8087F8D4
    /* lfs f1, 0(r31) */ // 0x8087F8D8
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = r29 + 0x98; // 0x8087F8E0
    /* li r4, 4 */ // 0x8087F8E4
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x8087F8EC
    /* li r4, 4 */ // 0x8087F8F0
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r29 + 0x98; // 0x8087F8F8
    /* li r4, 3 */ // 0x8087F8FC
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x8087F904
    /* li r4, 0 */ // 0x8087F908
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    /* lis r3, 0 */ // 0x8087F910
    r3 = *(0 + r3); // lwz @ 0x8087F914
    r0 = *(0xb90 + r3); // lwz @ 0x8087F918
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8087F91C
    if (==) goto 0x0x8087f97c;
    /* clrlwi r0, r30, 0x18 */ // 0x8087F924
    /* mulli r0, r0, 0xf0 */ // 0x8087F928
    r3 = r3 + r0; // 0x8087F92C
    r0 = *(0xf4 + r3); // lwz @ 0x8087F930
    if (==) goto 0x0x8087f948;
    if (==) goto 0x0x8087f964;
    /* b 0x8087f97c */ // 0x8087F944
    r3 = r29 + 0x98; // 0x8087F948
    /* li r4, 3 */ // 0x8087F94C
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x8087F954
    /* li r4, 4 */ // 0x8087F958
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    /* b 0x8087f97c */ // 0x8087F960
    r3 = r29 + 0x98; // 0x8087F964
    /* li r4, 3 */ // 0x8087F968
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x8087F970
    /* li r4, 3 */ // 0x8087F974
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r0 = *(0x24 + r1); // lwz @ 0x8087F97C
    r31 = *(0x1c + r1); // lwz @ 0x8087F980
    r30 = *(0x18 + r1); // lwz @ 0x8087F984
    r29 = *(0x14 + r1); // lwz @ 0x8087F988
    return;
}