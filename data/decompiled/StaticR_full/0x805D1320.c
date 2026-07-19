/* Function at 0x805D1320, size=112 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805D1320(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(0x88 + r1) = r30; // stw @ 0x805D1334
    r30 = r3;
    r3 = r4;
    FUN_805E0ED8(r3); // bl 0x805E0ED8
    r0 = r3;
    if (!=) goto 0x0x805d1374;
    /* lis r4, 0 */ // 0x805D1350
    r4 = r4 + 0; // 0x805D1358
    /* extsh r6, r0 */ // 0x805D135C
    r5 = r4 + 0x1b2; // 0x805D1360
    /* li r4, 0x80 */ // 0x805D1364
    /* crclr cr1eq */ // 0x805D1368
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
    /* b 0x805d1394 */ // 0x805D1370
    /* lis r4, 0 */ // 0x805D1374
    r4 = r4 + 0; // 0x805D137C
    /* extsh r6, r0 */ // 0x805D1380
    r5 = r4 + 0x1df; // 0x805D1384
    /* li r4, 0x80 */ // 0x805D1388
    /* crclr cr1eq */ // 0x805D138C
}