import random

suitChoices = ["Spades", "Hearts", "Clubs", "Diamonds"]
numChoices = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]
pile = []
deck = []
player1 = []
player2 = []
player = []


def turns ():
    count = count + 1
    if count % 2:
        playerChoice = player1
    else:
        playerChoice = player2      
    
def distributeCards():
    drawCard(player1, deck)
    drawCard(player2, deck)
    drawCard(player1, deck)
    drawCard(player2, deck)
    drawCard(player1, deck)
    drawCard(player2, deck)
    drawCard(player1, deck)
    drawCard(player2, deck)
    drawCard(player1, deck)
    drawCard(player2, deck)
    
def makeDeck():
    for a in suitChoices:
        for b in numChoices:
            deck.append([a, b])
    

def shuffleDeck(y):
    for x in y:
        random.shuffle(deck)
    return deck

def drawCard(Recipient, DeckUTakeFrom):
    Recipient.append(DeckUTakeFrom[-1])
    DeckUTakeFrom.pop(-1)

def checkWin():
    if len(player1) == 0 | len(player2) == 0:
        return True
    else:
        return False
        
'''
def play():
    if checkWin() == False:
    while (checkWin() == False):
        play()
            
'''
def start():
    if pile[-1][1] == 12:
        print "Oh, we have a Queen! You can put any club or another Queen..."
        
        deck.insert(pile[len(deck)/2])
        pile.pop(-1)
        start()

        
    turns()
    

            
            

y = raw_input("Let's Play Crazy Eight! Please enter the number of times to shuffle: ")
makeDeck()
deck = shuffleDeck(deck)

#print "Great! Let's Play!"



#check deck status

for x in range(0, len(deck)):
    print deck[x]
    

print "Number of Cards: "
print len(deck)

distributeCards()

for x in range(0, len(deck)):
    print deck[x]


print "Number of Cards: "
print len(deck)

print "Player 1 Cards: "
print player1

print "Player2 Cards: "
print player2

print deck [-1][0]


drawCard(pile, deck)
print pile[-1]
if pile[-1][1] == 8:
    print pile[-1]
    print "Oh, we have an eight! That hasn't happened in a while. Putting in the middle of the deck"
    deck.insert(pile[len(deck)/2])
    pile.pop(-1)
    drawCard(pile, deck)
    start()
else:
    start()

    
