/* Function at 0x806BBDC8, size=204 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_806BBDC8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x806BBDD8
    *(8 + r1) = r30; // stw @ 0x806BBDDC
    r30 = r3;
    r3 = *(0 + r31); // lwz @ 0x806BBDE4
    r4 = *(0 + r3); // lwz @ 0x806BBDE8
    r0 = *(0 + r4); // lwz @ 0x806BBDEC
    if (==) goto 0x0x806bbe04;
    if (==) goto 0x0x806bbe58;
    /* b 0x806bbe74 */ // 0x806BBE00
    FUN_808EDB94(); // bl 0x808EDB94
    r4 = r3;
    if (!=) goto 0x0x806bbe38;
    r3 = *(0 + r31); // lwz @ 0x806BBE14
    /* li r4, 0x41 */ // 0x806BBE18
    /* li r5, 0 */ // 0x806BBE1C
    FUN_80698C44(r4, r4, r5); // bl 0x80698C44
    r3 = *(0 + r31); // lwz @ 0x806BBE24
    /* li r4, 0 */ // 0x806BBE28
    /* li r5, 0xff */ // 0x806BBE2C
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    /* b 0x806bbe74 */ // 0x806BBE34
    r3 = *(0 + r31); // lwz @ 0x806BBE38
    /* li r5, 0 */ // 0x806BBE3C
    FUN_80698C44(r5, r5); // bl 0x80698C44
    r3 = *(0 + r31); // lwz @ 0x806BBE44
    /* li r4, 0 */ // 0x806BBE48
    /* li r5, 0xff */ // 0x806BBE4C
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    /* b 0x806bbe74 */ // 0x806BBE54
    /* li r4, 0x3f */ // 0x806BBE58
    /* li r5, 0 */ // 0x806BBE5C
    FUN_80698C44(r5, r4, r5); // bl 0x80698C44
    r3 = *(0 + r31); // lwz @ 0x806BBE64
    /* li r4, 0 */ // 0x806BBE68
    /* li r5, 0xff */ // 0x806BBE6C
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    /* li r0, 8 */ // 0x806BBE74
    *(0x310 + r30) = r0; // stw @ 0x806BBE78
    r31 = *(0xc + r1); // lwz @ 0x806BBE7C
    r30 = *(8 + r1); // lwz @ 0x806BBE80
    r0 = *(0x14 + r1); // lwz @ 0x806BBE84
    return;
}