# Dizi (Array) → Bağlı Liste (Linked List) — C

Bir diziyi tek yönlü bağlı listeye (singly linked list) dönüştüren küçük bir C programı.

## Nasıl çalışır?

- `arrayToLinkedList`: Dizideki her eleman için bir düğüm (node) oluşturur.
  `tail` işaretçisi tutulduğu için her ekleme O(1)'dir, dolayısıyla tüm dönüşüm O(n)'dir.
- `printList`: Listeyi baştan sona gezip `10 -> 20 -> ... -> NULL` biçiminde yazdırır.
- `freeList`: Ayrılan tüm düğümleri serbest bırakır (bellek sızıntısını önler).

## Derleme ve çalıştırma

```bash
gcc ArrayToLinkedList.c -o array_to_list
./array_to_list
```

## Örnek çıktı

```
Linked List: 10 -> 20 -> 30 -> 40 -> 50 -> NULL
```

## Karmaşıklık

| İşlem | Zaman | Bellek |
|-------|-------|--------|
| Diziden listeye | O(n) | O(n) |
| Yazdırma | O(n) | O(1) |
| Belleği serbest bırakma | O(n) | O(1) |
