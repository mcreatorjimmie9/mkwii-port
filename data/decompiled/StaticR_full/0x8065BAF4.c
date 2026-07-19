/* Function at 0x8065BAF4, size=128 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

int FUN_8065BAF4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x8065BAFC
    *(0x14 + r1) = r0; // stw @ 0x8065BB00
    r3 = *(0 + r3); // lwz @ 0x8065BB04
    r0 = *(0x2754 + r3); // lbz @ 0x8065BB08
    if (==) goto 0x0x8065bb84;
    /* lis r3, 0 */ // 0x8065BB14
    r5 = *(0 + r3); // lwz @ 0x8065BB18
    r0 = *(0x36 + r5); // lha @ 0x8065BB1C
    if (<) goto 0x0x8065bb44;
    /* lis r3, 1 */ // 0x8065BB28
    /* clrlwi r4, r0, 0x18 */ // 0x8065BB2C
    r0 = r3 + -0x6c10; // 0x8065BB30
    r0 = r0 * r4; // 0x8065BB34
    r3 = r5 + r0; // 0x8065BB38
    r3 = r3 + 0x38; // 0x8065BB3C
    /* b 0x8065bb48 */ // 0x8065BB40
    /* li r3, 0 */ // 0x8065BB44
    /* lis r4, 0 */ // 0x8065BB48
    /* addis r3, r3, 1 */ // 0x8065BB4C
    r4 = *(0 + r4); // lwz @ 0x8065BB50
    /* li r5, 0x168 */ // 0x8065BB54
    r3 = r3 + -0x71b0; // 0x8065BB58
    r4 = r4 + 0x204; // 0x8065BB5C
    FUN_805E3430(r5, r3, r4); // bl 0x805E3430
    /* lis r3, 0 */ // 0x8065BB64
    r3 = *(0 + r3); // lwz @ 0x8065BB68
    r3 = *(0x90 + r3); // lwz @ 0x8065BB6C
    FUN_806845FC(r4, r3); // bl 0x806845FC
}