/* Function at 0x805ABFC4, size=64 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805ABFC4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x805ABFCC
    /* lis r6, 0 */ // 0x805ABFD0
    *(0x24 + r1) = r0; // stw @ 0x805ABFD4
    r5 = r5 + 0; // 0x805ABFD8
    /* li r7, 5 */ // 0x805ABFDC
    *(0x1c + r1) = r31; // stw @ 0x805ABFE0
    *(0x18 + r1) = r30; // stw @ 0x805ABFE4
    r30 = r4;
    r4 = r6 + 0; // 0x805ABFEC
    /* li r6, 0xc */ // 0x805ABFF0
    *(0x14 + r1) = r29; // stw @ 0x805ABFF4
    r29 = r3;
    r3 = r3 + 0x68; // 0x805ABFFC
    FUN_805E3430(r4, r6, r3); // bl 0x805E3430
}