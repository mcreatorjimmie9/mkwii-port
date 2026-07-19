/* Function at 0x805B798C, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805B798C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x805B79A4
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x805B79AC
    r29 = r3;
    if (!=) goto 0x0x805b79c0;
    FUN_805ABAFC(); // bl 0x805ABAFC
    r30 = *(0xc94 + r3); // lwz @ 0x805B79BC
    r3 = r29 + r31; // 0x805B79C0
    r0 = *(0x270 + r3); // lbz @ 0x805B79C4
    /* extsb r31, r0 */ // 0x805B79C8
    if (!=) goto 0x0x805b79dc;
    /* li r3, 0 */ // 0x805B79D4
    /* b 0x805b7a94 */ // 0x805B79D8
    /* clrlwi r3, r31, 0x10 */ // 0x805B79DC
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x805b79f4;
    /* li r3, 0 */ // 0x805B79EC
    /* b 0x805b7a94 */ // 0x805B79F0
    r4 = r30;
    /* li r3, 0xb8 */ // 0x805B79F8
    /* li r5, 4 */ // 0x805B79FC
}