/* Function at 0x805B63E0, size=272 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_805B63E0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805B63FC
    r28 = r3;
    r0 = *(0xa4 + r3); // lbz @ 0x805B6404
    if (!=) goto 0x0x805b6418;
    /* li r3, 0 */ // 0x805B6410
    /* b 0x805b6500 */ // 0x805B6414
    if (==) goto 0x0x805b6430;
    r3 = r29;
    r4 = r5 + 0x110; // 0x805B6424
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x805b64fc */ // 0x805B642C
    r0 = *(4 + r3); // lwz @ 0x805B6430
    /* li r30, 0 */ // 0x805B6434
    if (!=) goto 0x0x805b6478;
    /* lis r3, 0 */ // 0x805B6440
    /* li r30, 0 */ // 0x805B6444
    r31 = *(0 + r3); // lwz @ 0x805B6448
    /* li r4, 4 */ // 0x805B644C
    /* li r6, 1 */ // 0x805B6450
    r5 = *(0x34 + r31); // lwz @ 0x805B6454
    r3 = r31 + 0xe0; // 0x805B6458
    FUN_805E3430(r4, r6, r3); // bl 0x805E3430
    r3 = r31 + 0xe0; // 0x805B6460
    r4 = r28 + 0x10; // 0x805B6464
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (==) goto 0x0x805b6478;
    /* li r30, 0xff */ // 0x805B6474
    /* lis r3, 0 */ // 0x805B6478
    r3 = *(0 + r3); // lwz @ 0x805B647C
    r0 = *(0x265 + r3); // lbz @ 0x805B6480
    if (!=) goto 0x0x805b64a4;
    r0 = *(0xae + r28); // lbz @ 0x805B648C
    /* extsb. r5, r0 */ // 0x805B6490
    if (<) goto 0x0x805b64a4;
    r0 = *(0xa6 + r28); // lbz @ 0x805B6498
    if (==) goto 0x0x805b64d0;
    /* clrlwi. r0, r30, 0x10 */ // 0x805B64A4
    if (!=) goto 0x0x805b64c8;
    r4 = *(0xc + r28); // lwz @ 0x805B64AC
    r3 = r29;
    r5 = *(8 + r28); // lbz @ 0x805B64B4
    r6 = *(0x5c + r28); // lwz @ 0x805B64B8
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x805b64fc;
    /* li r3, 0 */ // 0x805B64C8
    /* b 0x805b6500 */ // 0x805B64CC
    /* clrlwi. r0, r30, 0x10 */ // 0x805B64D0
    if (!=) goto 0x0x805b64f4;
    r4 = *(0xb4 + r28); // lwz @ 0x805B64D8
    r3 = r29;
    r6 = *(0xb0 + r28); // lwz @ 0x805B64E0
    /* clrlwi r5, r5, 0x10 */ // 0x805B64E4
    FUN_805E3430(r3); // bl 0x805E3430
}