/* Function at 0x80662264, size=88 bytes */
/* Stack frame: 0 bytes */

int FUN_80662264(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* lis r5, 0 */ // 0x80662264
    /* li r7, 0 */ // 0x80662268
    r5 = r5 + 0; // 0x8066226C
    /* li r0, 4 */ // 0x80662270
    r6 = r5;
    /* li r8, 0 */ // 0x80662278
    /* mtctr r0 */ // 0x8066227C
    r4 = *(0 + r6); // lwz @ 0x80662280
    if (!=) goto 0x0x80662298;
    /* slwi r0, r7, 2 */ // 0x8066228C
    r3 = r8 + r0; // 0x80662290
    return;
    r6 = r6 + 4; // 0x80662298
    r8 = r8 + 1; // 0x8066229C
    if (counter-- != 0) goto 0x0x80662280;
    r7 = r7 + 1; // 0x806622A4
    r5 = r5 + 0x10; // 0x806622A8
    if (<) goto 0x0x80662274;
    /* li r3, -1 */ // 0x806622B4
    return;
}