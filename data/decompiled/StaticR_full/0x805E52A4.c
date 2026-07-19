/* Function at 0x805E52A4, size=224 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805E52A4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x805E52AC
    *(0x94 + r1) = r0; // stw @ 0x805E52B0
    r4 = r4 + 0; // 0x805E52B4
    /* li r0, 0x10 */ // 0x805E52B8
    *(0x8c + r1) = r31; // stw @ 0x805E52C0
    r31 = r3;
    r4 = r4 + -4; // 0x805E52C8
    /* mtctr r0 */ // 0x805E52CC
    r3 = *(4 + r4); // lwz @ 0x805E52D0
    r0 = *(8 + r4); // lwzu @ 0x805E52D4
    *(4 + r5) = r3; // stw @ 0x805E52D8
    *(8 + r5) = r0; // stwu @ 0x805E52DC
    if (counter-- != 0) goto 0x0x805e52d0;
    /* lis r3, 0 */ // 0x805E52E4
    r5 = *(0 + r3); // lwz @ 0x805E52E8
    r0 = *(0x36 + r5); // lha @ 0x805E52EC
    if (<) goto 0x0x805e5314;
    /* lis r3, 1 */ // 0x805E52F8
    /* clrlwi r4, r0, 0x18 */ // 0x805E52FC
    r0 = r3 + -0x6c10; // 0x805E5300
    r0 = r0 * r4; // 0x805E5304
    r3 = r5 + r0; // 0x805E5308
    r3 = r3 + 0x38; // 0x805E530C
    /* b 0x805e5318 */ // 0x805E5310
    /* li r3, 0 */ // 0x805E5314
    r5 = r31;
    /* li r4, 0 */ // 0x805E531C
    FUN_805D7994(r3, r3, r5, r4); // bl 0x805D7994
    r0 = *(0x56 + r3); // lbz @ 0x805E5324
    if (!=) goto 0x0x805e5338;
    /* li r3, 1 */ // 0x805E5330
    /* b 0x805e5370 */ // 0x805E5334
    r5 = *(0x50 + r3); // lhz @ 0x805E5338
    /* slwi r0, r31, 2 */ // 0x805E533C
    r6 = *(0x52 + r3); // lbz @ 0x805E5344
    /* mulli r5, r5, 0x3c */ // 0x805E5348
    /* lwzx r0, r4, r0 */ // 0x805E534C
    r7 = *(0x54 + r3); // lhz @ 0x805E5350
    /* li r3, 1 */ // 0x805E5354
    r4 = r6 + r5; // 0x805E5358
    /* mulli r4, r4, 0x3e8 */ // 0x805E535C
    r4 = r7 + r4; // 0x805E5360
    if (>) goto 0x0x805e5370;
    /* li r3, 2 */ // 0x805E536C
    r0 = *(0x94 + r1); // lwz @ 0x805E5370
    r31 = *(0x8c + r1); // lwz @ 0x805E5374
    return;
}