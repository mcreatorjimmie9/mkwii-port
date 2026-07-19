/* Function at 0x805B4570, size=84 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805B4570(int r3, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r6, 0 */ // 0x805B4578
    *(0x14 + r1) = r0; // stw @ 0x805B457C
    /* lis r0, 0x4330 */ // 0x805B4580
    /* lfd f1, 0(r6) */ // 0x805B4584
    *(0xc + r1) = r5; // stw @ 0x805B4588
    /* lis r5, 0 */ // 0x805B458C
    *(8 + r1) = r0; // stw @ 0x805B4590
    /* mulli r0, r3, 0xec */ // 0x805B4594
    r3 = *(0 + r5); // lwz @ 0x805B4598
    /* li r5, 1 */ // 0x805B459C
    /* lfd f0, 8(r1) */ // 0x805B45A0
    r3 = r3 + r0; // 0x805B45A4
    /* fsubs f1, f0, f1 */ // 0x805B45A8
    r3 = r3 + 4; // 0x805B45AC
    FUN_805B1660(r5, r3); // bl 0x805B1660
    r0 = *(0x14 + r1); // lwz @ 0x805B45B4
    return;
}