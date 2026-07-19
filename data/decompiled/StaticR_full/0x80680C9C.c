/* Function at 0x80680C9C, size=236 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_80680C9C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80680CA4
    *(0xc + r1) = r31; // stw @ 0x80680CAC
    *(8 + r1) = r30; // stw @ 0x80680CB0
    r30 = r3;
    r3 = *(0 + r4); // lwz @ 0x80680CB8
    r4 = *(0x4b0 + r30); // lwz @ 0x80680CBC
    r31 = r3 + 0x34; // 0x80680CC0
    r3 = r31;
    FUN_8067F3DC(r3); // bl 0x8067F3DC
    r0 = *(8 + r30); // lwz @ 0x80680CCC
    if (==) goto 0x0x80680ce0;
    if (!=) goto 0x0x80680d70;
    r0 = *(0x4bc + r30); // lwz @ 0x80680CE0
    if (==) goto 0x0x80680cf8;
    if (==) goto 0x0x80680d3c;
    /* b 0x80680d70 */ // 0x80680CF4
    r4 = *(0x4b8 + r30); // lwz @ 0x80680CF8
    FUN_8067FAAC(); // bl 0x8067FAAC
    if (!=) goto 0x0x80680d70;
    /* li r0, 0 */ // 0x80680D08
    *(0x4bc + r30) = r0; // stw @ 0x80680D0C
    r3 = r30 + 0x1c8; // 0x80680D10
    /* li r4, 0x26ac */ // 0x80680D14
    /* li r5, 0 */ // 0x80680D18
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    r0 = *(8 + r30); // lwz @ 0x80680D20
    if (!=) goto 0x0x80680d70;
    r4 = *(0x4b0 + r30); // lwz @ 0x80680D2C
    r3 = r31;
    FUN_8067F914(r3); // bl 0x8067F914
    /* b 0x80680d70 */ // 0x80680D38
    r0 = *(0x4b8 + r30); // lwz @ 0x80680D3C
    if (==) goto 0x0x80680d50;
    if (==) goto 0x0x80680d70;
    r4 = *(0x4b0 + r30); // lwz @ 0x80680D50
    r3 = r31;
    FUN_8067F430(r3); // bl 0x8067F430
    if (==) goto 0x0x80680d70;
    r4 = *(0x4b0 + r30); // lwz @ 0x80680D64
    r3 = r31;
    FUN_8067F914(r3); // bl 0x8067F914
    r0 = *(0x14 + r1); // lwz @ 0x80680D70
    r31 = *(0xc + r1); // lwz @ 0x80680D74
    r30 = *(8 + r1); // lwz @ 0x80680D78
    return;
}