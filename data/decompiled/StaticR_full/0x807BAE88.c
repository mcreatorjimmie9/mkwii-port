/* Function at 0x807BAE88, size=160 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807BAE88(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x807BAE9C
    r30 = r4;
    FUN_807B6C38(); // bl 0x807B6C38
    /* lis r3, 0 */ // 0x807BAEA8
    /* lis r4, 0 */ // 0x807BAEAC
    r3 = r3 + 0; // 0x807BAEB0
    /* li r6, 0 */ // 0x807BAEB4
    r4 = r4 + 0; // 0x807BAEB8
    *(0x34 + r31) = r3; // stw @ 0x807BAEBC
    /* lis r5, 0 */ // 0x807BAEC0
    /* li r3, 0x28 */ // 0x807BAEC4
    *(0x60 + r31) = r4; // stw @ 0x807BAEC8
    *(0x64 + r31) = r6; // stw @ 0x807BAECC
    r4 = *(0 + r5); // lwzu @ 0x807BAED0
    r0 = *(4 + r5); // lwz @ 0x807BAED4
    *(0x6c + r31) = r0; // stw @ 0x807BAED8
    *(0x68 + r31) = r4; // stw @ 0x807BAEDC
    r0 = *(8 + r5); // lwz @ 0x807BAEE0
    *(0x70 + r31) = r0; // stw @ 0x807BAEE4
    r4 = *(0 + r5); // lwz @ 0x807BAEE8
    r0 = *(4 + r5); // lwz @ 0x807BAEEC
    *(0x78 + r31) = r0; // stw @ 0x807BAEF0
    *(0x74 + r31) = r4; // stw @ 0x807BAEF4
    r0 = *(8 + r5); // lwz @ 0x807BAEF8
    *(0x7c + r31) = r0; // stw @ 0x807BAEFC
    r4 = *(0 + r5); // lwz @ 0x807BAF00
    r0 = *(4 + r5); // lwz @ 0x807BAF04
    *(0x84 + r31) = r0; // stw @ 0x807BAF08
    *(0x80 + r31) = r4; // stw @ 0x807BAF0C
    r0 = *(8 + r5); // lwz @ 0x807BAF10
    *(0x88 + r31) = r0; // stw @ 0x807BAF14
    *(0x8c + r31) = r6; // stw @ 0x807BAF18
    *(0x90 + r31) = r6; // stw @ 0x807BAF1C
    *(0x94 + r31) = r6; // stw @ 0x807BAF20
    FUN_805E3430(); // bl 0x805E3430
}