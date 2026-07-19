/* Function at 0x80673B78, size=352 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 17 function(s) */

int FUN_80673B78(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x80673B80
    *(0xc + r1) = r31; // stw @ 0x80673B88
    *(8 + r1) = r30; // stw @ 0x80673B8C
    r30 = r3;
    r3 = r3 + 0x98; // 0x80673B94
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x80673B9C
    if (!=) goto 0x0x80673c44;
    /* lis r3, 0 */ // 0x80673BA8
    r4 = *(0x174 + r30); // lwz @ 0x80673BAC
    r3 = *(0 + r3); // lwz @ 0x80673BB0
    r3 = r3 + 0x34; // 0x80673BB4
    FUN_8067FAE4(r3, r3); // bl 0x8067FAE4
    if (!=) goto 0x0x80673cc0;
    r3 = r30 + 0x98; // 0x80673BC4
    /* li r4, 1 */ // 0x80673BC8
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x80673BD0
    /* li r4, 1 */ // 0x80673BD4
    /* lfs f1, 0(r31) */ // 0x80673BD8
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x80673BE0
    /* li r4, 0 */ // 0x80673BE4
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80673BEC
    /* li r4, 0 */ // 0x80673BF0
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x80673BF8
    /* li r4, 2 */ // 0x80673BFC
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80673C04
    /* li r4, 1 */ // 0x80673C08
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r5 = *(0x178 + r30); // lbz @ 0x80673C10
    /* lis r4, 0 */ // 0x80673C14
    r4 = r4 + 0; // 0x80673C18
    r3 = r30;
    r4 = r4 + 0xf6; // 0x80673C20
    r5 = r5 + 0x9f7; // 0x80673C24
    /* li r6, 0 */ // 0x80673C28
    FUN_806A093C(r4, r3, r4, r5, r6); // bl 0x806A093C
    r3 = r30;
    /* li r4, 0x4e */ // 0x80673C34
    /* li r5, -1 */ // 0x80673C38
    FUN_806A03CC(r6, r3, r4, r5); // bl 0x806A03CC
    /* b 0x80673cc0 */ // 0x80673C40
    /* lis r3, 0 */ // 0x80673C44
    r4 = *(0x174 + r30); // lwz @ 0x80673C48
    r3 = *(0 + r3); // lwz @ 0x80673C4C
    r3 = r3 + 0x34; // 0x80673C50
    FUN_8067FAE4(r3, r3); // bl 0x8067FAE4
    if (!=) goto 0x0x80673cc0;
    r3 = r30 + 0x98; // 0x80673C60
    /* li r4, 1 */ // 0x80673C64
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x80673C6C
    /* li r4, 0 */ // 0x80673C70
    /* lfs f1, 0(r31) */ // 0x80673C74
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x80673C7C
    /* li r4, 0 */ // 0x80673C80
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80673C88
    /* li r4, 1 */ // 0x80673C8C
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    /* lis r4, 0 */ // 0x80673C94
    r3 = r30;
    r4 = r4 + 0; // 0x80673C9C
    /* li r5, 0x9f6 */ // 0x80673CA0
    r4 = r4 + 0x106; // 0x80673CA4
    /* li r6, 0 */ // 0x80673CA8
    FUN_806A093C(r3, r4, r5, r4, r6); // bl 0x806A093C
    r3 = r30;
    /* li r4, 0x4f */ // 0x80673CB4
    /* li r5, -1 */ // 0x80673CB8
    FUN_806A03CC(r6, r3, r4, r5); // bl 0x806A03CC
    r0 = *(0x14 + r1); // lwz @ 0x80673CC0
    r31 = *(0xc + r1); // lwz @ 0x80673CC4
    r30 = *(8 + r1); // lwz @ 0x80673CC8
    return;
}