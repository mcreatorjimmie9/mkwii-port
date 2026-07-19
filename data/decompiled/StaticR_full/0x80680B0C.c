/* Function at 0x80680B0C, size=236 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_80680B0C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80680B1C
    r30 = r3;
    r4 = *(0x4b0 + r3); // lwz @ 0x80680B24
    if (!=) goto 0x0x80680b38;
    FUN_80671C3C(); // bl 0x80671C3C
    /* b 0x80680be0 */ // 0x80680B34
    /* lis r3, 0 */ // 0x80680B38
    r3 = *(0 + r3); // lwz @ 0x80680B3C
    r3 = r3 + 0x34; // 0x80680B40
    FUN_8067F3DC(r3, r3); // bl 0x8067F3DC
    r4 = *(0x4b0 + r30); // lwz @ 0x80680B48
    r31 = r3;
    r5 = *(0x4b4 + r30); // lbz @ 0x80680B50
    r3 = r30 + 0x44; // 0x80680B54
    /* li r6, 0 */ // 0x80680B58
    FUN_80670D14(r3, r6); // bl 0x80670D14
    r4 = *(0x4b8 + r30); // lwz @ 0x80680B60
    r3 = r30 + 0x44; // 0x80680B64
    FUN_80670D24(r3, r6, r3); // bl 0x80670D24
    r4 = *(0x4b8 + r30); // lwz @ 0x80680B6C
    r3 = r31;
    FUN_8067FAAC(r3, r3); // bl 0x8067FAAC
    if (==) goto 0x0x80680b9c;
    /* li r0, 1 */ // 0x80680B80
    *(0x4bc + r30) = r0; // stw @ 0x80680B84
    r3 = r30 + 0x1c8; // 0x80680B88
    /* li r4, 0x26ae */ // 0x80680B8C
    /* li r5, 0 */ // 0x80680B90
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    /* b 0x80680bb4 */ // 0x80680B98
    /* li r0, 0 */ // 0x80680B9C
    *(0x4bc + r30) = r0; // stw @ 0x80680BA0
    r3 = r30 + 0x1c8; // 0x80680BA4
    /* li r4, 0x26ac */ // 0x80680BA8
    /* li r5, 0 */ // 0x80680BAC
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    r3 = r30;
    /* li r4, 0x1e */ // 0x80680BB8
    /* li r5, -1 */ // 0x80680BBC
    FUN_806724B8(r5, r3, r4, r5); // bl 0x806724B8
    /* lis r3, 0 */ // 0x80680BC4
    /* lis r5, 0 */ // 0x80680BC8
    /* lfs f1, 0(r5) */ // 0x80680BCC
    /* li r4, 5 */ // 0x80680BD0
    r3 = *(0 + r3); // lwz @ 0x80680BD4
    /* li r5, 0x1e */ // 0x80680BD8
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    r0 = *(0x14 + r1); // lwz @ 0x80680BE0
    r31 = *(0xc + r1); // lwz @ 0x80680BE4
    r30 = *(8 + r1); // lwz @ 0x80680BE8
    return;
}