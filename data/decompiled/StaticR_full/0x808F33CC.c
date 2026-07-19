/* Function at 0x808F33CC, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_808F33CC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x808F33D8
    *(0xc + r1) = r31; // stw @ 0x808F33DC
    r31 = r3;
    if (==) goto 0x0x808f346c;
    r0 = *(0 + r3); // lwz @ 0x808F33E8
    if (>) goto 0x0x808f3484;
    /* lis r4, 0 */ // 0x808F33F4
    /* slwi r0, r0, 2 */ // 0x808F33F8
    r4 = r4 + 0; // 0x808F33FC
    /* lwzx r4, r4, r0 */ // 0x808F3400
    /* mtctr r4 */ // 0x808F3404
    /* bctr  */ // 0x808F3408
    /* li r0, 6 */ // 0x808F340C
    *(0 + r3) = r0; // stw @ 0x808F3410
    /* b 0x808f3484 */ // 0x808F3414
    /* li r0, 6 */ // 0x808F3418
    *(0 + r3) = r0; // stw @ 0x808F341C
    /* b 0x808f3484 */ // 0x808F3420
    /* li r0, 0xb */ // 0x808F3424
    *(0 + r3) = r0; // stw @ 0x808F3428
    /* b 0x808f3484 */ // 0x808F342C
    /* li r0, 3 */ // 0x808F3430
    *(0 + r3) = r0; // stw @ 0x808F3434
}