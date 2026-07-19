/* Function at 0x8087A94C, size=196 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8087A94C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8087A954
    *(0x14 + r1) = r0; // stw @ 0x8087A958
    /* li r0, 1 */ // 0x8087A95C
    *(0xc + r1) = r31; // stw @ 0x8087A960
    r31 = r3;
    *(0x80 + r3) = r0; // stb @ 0x8087A968
    r3 = r3 + 0x98; // 0x8087A96C
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8087A974
    /* li r4, 0 */ // 0x8087A978
    /* lfs f1, 0(r5) */ // 0x8087A97C
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r5 = *(0x17c + r31); // lwz @ 0x8087A984
    if (==) goto 0x0x8087a9fc;
    r3 = *(0x178 + r31); // lwz @ 0x8087A990
    if (<) goto 0x0x8087a9fc;
    r0 = *(4 + r5); // lwz @ 0x8087A99C
    /* li r4, 0 */ // 0x8087A9A0
    /* mtctr r0 */ // 0x8087A9A4
    if (<=) goto 0x0x8087a9d4;
    r0 = *(0x14 + r5); // lwz @ 0x8087A9B0
    if (==) goto 0x0x8087a9c8;
    if (!=) goto 0x0x8087a9c8;
    /* b 0x8087a9d8 */ // 0x8087A9C4
    r5 = r5 + 4; // 0x8087A9C8
    r4 = r4 + 1; // 0x8087A9CC
    if (counter-- != 0) goto 0x0x8087a9b0;
    /* li r4, -1 */ // 0x8087A9D4
    if (<) goto 0x0x8087a9fc;
    if (>=) goto 0x0x8087a9fc;
    r3 = *(0x17c + r31); // lwz @ 0x8087A9E8
    /* li r0, -1 */ // 0x8087A9EC
    *(0x178 + r31) = r0; // stw @ 0x8087A9F0
    /* li r0, 0 */ // 0x8087A9F4
    /* stbx r0, r3, r4 */ // 0x8087A9F8
    r0 = *(0x14 + r1); // lwz @ 0x8087A9FC
    r31 = *(0xc + r1); // lwz @ 0x8087AA00
    return;
}