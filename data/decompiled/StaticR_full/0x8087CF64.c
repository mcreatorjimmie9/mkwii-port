/* Function at 0x8087CF64, size=416 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_8087CF64(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, -1 */ // 0x8087CF70
    *(0xc + r1) = r31; // stw @ 0x8087CF74
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8087CF7C
    r30 = r4;
    /* li r4, 0 */ // 0x8087CF84
    *(0x180 + r3) = r0; // stw @ 0x8087CF88
    *(0x178 + r3) = r5; // stw @ 0x8087CF8C
    r3 = r3 + 0x98; // 0x8087CF90
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8087CF98
    if (==) goto 0x0x8087cfac;
    if (!=) goto 0x0x8087d0ec;
    r4 = *(0x17c + r31); // lwz @ 0x8087CFAC
    if (==) goto 0x0x8087cffc;
    r3 = *(0 + r30); // lwz @ 0x8087CFB8
    r3 = *(4 + r3); // lwz @ 0x8087CFBC
    r0 = *(8 + r3); // lwz @ 0x8087CFC0
    /* rlwinm. r0, r0, 0, 0, 0 */ // 0x8087CFC4
    if (==) goto 0x0x8087cffc;
    /* li r3, 9 */ // 0x8087CFCC
    /* li r4, 1 */ // 0x8087CFD0
    FUN_808CFF44(r3, r4); // bl 0x808CFF44
    /* lis r4, 0 */ // 0x8087CFD8
    r5 = r3;
    r4 = r4 + 0; // 0x8087CFE0
    r3 = r31;
    r4 = r4 + 0x12e; // 0x8087CFE8
    FUN_806A0D70(r4, r5, r4, r3, r4); // bl 0x806A0D70
    /* li r0, 0 */ // 0x8087CFF0
    *(0x17c + r31) = r0; // stw @ 0x8087CFF4
    /* b 0x8087d0ec */ // 0x8087CFF8
    r3 = *(0 + r30); // lwz @ 0x8087CFFC
    r3 = *(4 + r3); // lwz @ 0x8087D000
    r0 = *(8 + r3); // lwz @ 0x8087D004
    /* rlwinm. r0, r0, 0, 0, 0 */ // 0x8087D008
    if (!=) goto 0x0x8087d0ec;
    if (==) goto 0x0x8087d054;
    r0 = *(0xc + r3); // lwz @ 0x8087D018
    /* rlwinm. r0, r0, 0, 4, 4 */ // 0x8087D01C
    if (==) goto 0x0x8087d054;
    /* li r3, 0xf */ // 0x8087D024
    /* li r4, 1 */ // 0x8087D028
    FUN_808CFF44(r3, r4); // bl 0x808CFF44
    /* lis r4, 0 */ // 0x8087D030
    r5 = r3;
    r4 = r4 + 0; // 0x8087D038
    r3 = r31;
    r4 = r4 + 0x133; // 0x8087D040
    FUN_806A0D70(r4, r5, r4, r3, r4); // bl 0x806A0D70
    /* li r0, 1 */ // 0x8087D048
    *(0x17c + r31) = r0; // stw @ 0x8087D04C
    /* b 0x8087d0ec */ // 0x8087D050
    r3 = *(0xc + r3); // lwz @ 0x8087D054
    /* rlwinm. r0, r3, 0, 4, 4 */ // 0x8087D058
    if (!=) goto 0x0x8087d0ec;
    if (==) goto 0x0x8087d0a0;
    /* rlwinm. r0, r3, 0, 0x10, 0x10 */ // 0x8087D068
    if (==) goto 0x0x8087d0a0;
    /* li r3, 0xb */ // 0x8087D070
    /* li r4, 1 */ // 0x8087D074
    FUN_808CFF44(r3, r4); // bl 0x808CFF44
    /* lis r4, 0 */ // 0x8087D07C
    r5 = r3;
    r4 = r4 + 0; // 0x8087D084
    r3 = r31;
    r4 = r4 + 0x138; // 0x8087D08C
    FUN_806A0D70(r4, r5, r4, r3, r4); // bl 0x806A0D70
    /* li r0, 2 */ // 0x8087D094
    *(0x17c + r31) = r0; // stw @ 0x8087D098
    /* b 0x8087d0ec */ // 0x8087D09C
    /* rlwinm. r0, r3, 0, 0x10, 0x10 */ // 0x8087D0A0
    if (!=) goto 0x0x8087d0ec;
    if (==) goto 0x0x8087d0e8;
    /* rlwinm. r0, r3, 0, 2, 2 */ // 0x8087D0B0
    if (==) goto 0x0x8087d0e8;
    /* li r3, 0xe */ // 0x8087D0B8
    /* li r4, 1 */ // 0x8087D0BC
    FUN_808CFF44(r3, r4); // bl 0x808CFF44
    /* lis r4, 0 */ // 0x8087D0C4
    r5 = r3;
    r4 = r4 + 0; // 0x8087D0CC
    r3 = r31;
    r4 = r4 + 0x13d; // 0x8087D0D4
    FUN_806A0D70(r4, r5, r4, r3, r4); // bl 0x806A0D70
    /* li r0, 3 */ // 0x8087D0DC
    *(0x17c + r31) = r0; // stw @ 0x8087D0E0
    /* b 0x8087d0ec */ // 0x8087D0E4
    /* rlwinm. r0, r3, 0, 2, 2 */ // 0x8087D0E8
    r0 = *(0x14 + r1); // lwz @ 0x8087D0EC
    r31 = *(0xc + r1); // lwz @ 0x8087D0F0
    r30 = *(8 + r1); // lwz @ 0x8087D0F4
    return;
}