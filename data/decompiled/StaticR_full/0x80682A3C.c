/* Function at 0x80682A3C, size=396 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_80682A3C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x80682A44
    /* lis r31, 0 */ // 0x80682A50
    *(0x18 + r1) = r30; // stw @ 0x80682A54
    *(0x14 + r1) = r29; // stw @ 0x80682A58
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x80682A60
    r3 = r3 + 0x34; // 0x80682A64
    FUN_8067F3DC(r3); // bl 0x8067F3DC
    if (!=) goto 0x0x80682a8c;
    r3 = *(0 + r31); // lwz @ 0x80682A74
    r3 = r3 + 0x34; // 0x80682A78
    FUN_8067F50C(r3); // bl 0x8067F50C
    r3 = *(0 + r31); // lwz @ 0x80682A80
    r3 = r3 + 0x34; // 0x80682A84
    FUN_8067F608(r3, r3); // bl 0x8067F608
    /* lis r31, 0 */ // 0x80682A8C
    r3 = *(0 + r31); // lwz @ 0x80682A90
    r3 = *(0 + r3); // lwz @ 0x80682A94
    FUN_80686240(r3); // bl 0x80686240
    /* lis r3, 0 */ // 0x80682A9C
    r3 = *(0 + r3); // lwz @ 0x80682AA0
    FUN_8070037C(r3); // bl 0x8070037C
    r3 = *(0 + r31); // lwz @ 0x80682AA8
    r3 = *(0x90 + r3); // lwz @ 0x80682AAC
    FUN_80683F90(r3); // bl 0x80683F90
    r3 = *(0 + r31); // lwz @ 0x80682AB4
    r3 = *(0 + r3); // lwz @ 0x80682AB8
    r0 = *(0 + r3); // lwz @ 0x80682ABC
    if (<) goto 0x0x80682ad0;
    if (<=) goto 0x0x80682ba4;
    if (!=) goto 0x0x80682bac;
    r30 = *(0x144 + r3); // lwz @ 0x80682AD8
    if (!=) goto 0x0x80682aec;
    /* li r30, 0 */ // 0x80682AE4
    /* b 0x80682b40 */ // 0x80682AE8
    /* lis r31, 0 */ // 0x80682AEC
    r31 = r31 + 0; // 0x80682AF0
    if (==) goto 0x0x80682b3c;
    r12 = *(0 + r30); // lwz @ 0x80682AF8
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x80682B00
    /* mtctr r12 */ // 0x80682B04
    /* bctrl  */ // 0x80682B08
    /* b 0x80682b24 */ // 0x80682B0C
    if (!=) goto 0x0x80682b20;
    /* li r0, 1 */ // 0x80682B18
    /* b 0x80682b30 */ // 0x80682B1C
    r3 = *(0 + r3); // lwz @ 0x80682B20
    if (!=) goto 0x0x80682b10;
    /* li r0, 0 */ // 0x80682B2C
    if (==) goto 0x0x80682b3c;
    /* b 0x80682b40 */ // 0x80682B38
    /* li r30, 0 */ // 0x80682B3C
    r12 = *(0 + r30); // lwz @ 0x80682B40
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x80682B48
    /* mtctr r12 */ // 0x80682B4C
    /* bctrl  */ // 0x80682B50
    r12 = *(0 + r30); // lwz @ 0x80682B54
    r3 = r30;
    /* li r4, 0x811 */ // 0x80682B5C
    /* li r5, 0 */ // 0x80682B60
    r12 = *(0x68 + r12); // lwz @ 0x80682B64
    /* mtctr r12 */ // 0x80682B68
    /* bctrl  */ // 0x80682B6C
    r12 = *(0 + r29); // lwz @ 0x80682B70
    r3 = r29;
    /* li r4, 0x4f */ // 0x80682B78
    /* li r5, 0 */ // 0x80682B7C
    r12 = *(0x24 + r12); // lwz @ 0x80682B80
    /* mtctr r12 */ // 0x80682B84
    /* bctrl  */ // 0x80682B88
    /* lis r3, 0 */ // 0x80682B8C
    r3 = *(0 + r3); // lwz @ 0x80682B90
    FUN_806FDEC4(r3); // bl 0x806FDEC4
    /* li r0, 1 */ // 0x80682B98
    *(0x68 + r29) = r0; // stw @ 0x80682B9C
    /* b 0x80682bac */ // 0x80682BA0
    r3 = r29;
    FUN_80682FB0(r3); // bl 0x80682FB0
    r0 = *(0x24 + r1); // lwz @ 0x80682BAC
    r31 = *(0x1c + r1); // lwz @ 0x80682BB0
    r30 = *(0x18 + r1); // lwz @ 0x80682BB4
    r29 = *(0x14 + r1); // lwz @ 0x80682BB8
    return;
}