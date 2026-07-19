/* Function at 0x8066D634, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8066D634(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8066D63C
    /* li r5, 1 */ // 0x8066D640
    *(0x14 + r1) = r0; // stw @ 0x8066D644
    /* li r0, 0 */ // 0x8066D648
    r4 = r4 + 0; // 0x8066D64C
    /* li r6, 1 */ // 0x8066D650
    *(0xc + r1) = r31; // stw @ 0x8066D654
    /* lis r31, 0 */ // 0x8066D658
    r31 = r31 + 0; // 0x8066D65C
    /* li r7, 1 */ // 0x8066D660
    *(8 + r1) = r30; // stw @ 0x8066D664
    r30 = r3;
    *(0 + r3) = r4; // stw @ 0x8066D66C
    /* li r4, 1 */ // 0x8066D670
    *(4 + r3) = r0; // stw @ 0x8066D674
    *(0x24 + r3) = r0; // stw @ 0x8066D678
    *(0x28 + r3) = r0; // stw @ 0x8066D67C
    *(0x2c + r3) = r0; // stw @ 0x8066D680
    *(0x30 + r3) = r31; // stwu @ 0x8066D684
    FUN_805B9568(); // bl 0x805B9568
    r3 = r30 + 0x30; // 0x8066D68C
    FUN_805B95A4(r3); // bl 0x805B95A4
    *(0x64 + r30) = r31; // stw @ 0x8066D694
    r3 = r30 + 0x64; // 0x8066D698
    /* li r4, 1 */ // 0x8066D69C
    /* li r5, 1 */ // 0x8066D6A0
    /* li r6, 1 */ // 0x8066D6A4
    /* li r7, 1 */ // 0x8066D6A8
    FUN_805B9568(r3, r4, r5, r6, r7); // bl 0x805B9568
    r3 = r30 + 0x64; // 0x8066D6B0
    FUN_805B95A4(r5, r6, r7, r3); // bl 0x805B95A4
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8066D6BC
    r30 = *(8 + r1); // lwz @ 0x8066D6C0
    r0 = *(0x14 + r1); // lwz @ 0x8066D6C4
    return;
}