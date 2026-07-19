/* Function at 0x80788420, size=224 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80788420(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x38 + r1) = r30; // stw @ 0x80788438
    /* lis r30, 0 */ // 0x8078843C
    r30 = r30 + 0; // 0x80788440
    *(0x34 + r1) = r29; // stw @ 0x80788444
    if (==) goto 0x0x807885a8;
    /* lis r3, 0 */ // 0x8078844C
    r5 = *(0 + r3); // lwz @ 0x80788450
    *(0xb8 + r5) = r4; // stw @ 0x80788454
    r3 = *(0 + r4); // lwz @ 0x80788458
    if (==) goto 0x0x8078846c;
    r0 = *(0x90 + r3); // lwz @ 0x80788464
    /* b 0x80788470 */ // 0x80788468
    /* li r0, -1 */ // 0x8078846C
    *(0xbc + r5) = r0; // stw @ 0x80788470
    /* li r29, 0 */ // 0x80788474
    r3 = *(0 + r4); // lwz @ 0x80788478
    if (==) goto 0x0x80788494;
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x80788494;
    /* li r29, 1 */ // 0x80788490
    if (==) goto 0x0x807884b4;
    r3 = *(0 + r31); // lwz @ 0x8078849C
    if (==) goto 0x0x807884b4;
    /* li r4, 0 */ // 0x807884A8
    /* li r5, 0 */ // 0x807884AC
    FUN_805E3430(r4, r5); // bl 0x805E3430
    r3 = *(0 + r31); // lwz @ 0x807884B4
    if (==) goto 0x0x807884c8;
    r3 = *(0x90 + r3); // lwz @ 0x807884C0
    /* b 0x807884cc */ // 0x807884C4
    /* li r3, -1 */ // 0x807884C8
    r0 = r3 + -0x7b; // 0x807884CC
    if (>) goto 0x0x807885a8;
    /* lis r3, 0 */ // 0x807884D8
    /* slwi r0, r0, 2 */ // 0x807884DC
    r3 = r3 + 0; // 0x807884E0
    /* lwzx r3, r3, r0 */ // 0x807884E4
    /* mtctr r3 */ // 0x807884E8
    /* bctr  */ // 0x807884EC
    r3 = r30 + 0x1d0; // 0x807884F0
    r4 = *(0x1d0 + r30); // lwz @ 0x807884F4
    r0 = *(4 + r3); // lwz @ 0x807884F8
    /* lis r3, 0 */ // 0x807884FC
}