/* Function at 0x808CF954, size=252 bytes */
/* Stack frame: 0 bytes */

int FUN_808CF954(int r3, int r4, int r5, int r6)
{
    /* lis r3, 0 */ // 0x808CF954
    /* li r0, 2 */ // 0x808CF958
    r4 = *(0 + r3); // lwz @ 0x808CF95C
    /* li r3, 0 */ // 0x808CF960
    /* li r6, 0 */ // 0x808CF964
    r5 = r4 + 0xc18; // 0x808CF968
    /* mtctr r0 */ // 0x808CF96C
    /* clrlwi r0, r6, 0x18 */ // 0x808CF970
    /* mulli r0, r0, 0xf0 */ // 0x808CF974
    r4 = r5 + r0; // 0x808CF978
    r0 = *(0x10 + r4); // lwz @ 0x808CF97C
    if (==) goto 0x0x808cf990;
    r0 = r3 + 1; // 0x808CF988
    /* clrlwi r3, r0, 0x18 */ // 0x808CF98C
    r6 = r6 + 1; // 0x808CF990
    /* clrlwi r0, r6, 0x18 */ // 0x808CF994
    /* mulli r0, r0, 0xf0 */ // 0x808CF998
    r4 = r5 + r0; // 0x808CF99C
    r0 = *(0x10 + r4); // lwz @ 0x808CF9A0
    if (==) goto 0x0x808cf9b4;
    r0 = r3 + 1; // 0x808CF9AC
    /* clrlwi r3, r0, 0x18 */ // 0x808CF9B0
    r6 = r6 + 1; // 0x808CF9B4
    /* clrlwi r0, r6, 0x18 */ // 0x808CF9B8
    /* mulli r0, r0, 0xf0 */ // 0x808CF9BC
    r4 = r5 + r0; // 0x808CF9C0
    r0 = *(0x10 + r4); // lwz @ 0x808CF9C4
    if (==) goto 0x0x808cf9d8;
    r0 = r3 + 1; // 0x808CF9D0
    /* clrlwi r3, r0, 0x18 */ // 0x808CF9D4
    r6 = r6 + 1; // 0x808CF9D8
    /* clrlwi r0, r6, 0x18 */ // 0x808CF9DC
    /* mulli r0, r0, 0xf0 */ // 0x808CF9E0
    r4 = r5 + r0; // 0x808CF9E4
    r0 = *(0x10 + r4); // lwz @ 0x808CF9E8
    if (==) goto 0x0x808cf9fc;
    r0 = r3 + 1; // 0x808CF9F4
    /* clrlwi r3, r0, 0x18 */ // 0x808CF9F8
    r6 = r6 + 1; // 0x808CF9FC
    /* clrlwi r0, r6, 0x18 */ // 0x808CFA00
    /* mulli r0, r0, 0xf0 */ // 0x808CFA04
    r4 = r5 + r0; // 0x808CFA08
    r0 = *(0x10 + r4); // lwz @ 0x808CFA0C
    if (==) goto 0x0x808cfa20;
    r0 = r3 + 1; // 0x808CFA18
    /* clrlwi r3, r0, 0x18 */ // 0x808CFA1C
    r6 = r6 + 1; // 0x808CFA20
    /* clrlwi r0, r6, 0x18 */ // 0x808CFA24
    /* mulli r0, r0, 0xf0 */ // 0x808CFA28
    r4 = r5 + r0; // 0x808CFA2C
    r0 = *(0x10 + r4); // lwz @ 0x808CFA30
    if (==) goto 0x0x808cfa44;
    r0 = r3 + 1; // 0x808CFA3C
    /* clrlwi r3, r0, 0x18 */ // 0x808CFA40
    r6 = r6 + 1; // 0x808CFA44
    if (counter-- != 0) goto 0x0x808cf970;
    return;
}