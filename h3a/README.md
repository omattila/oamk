#Olio


## Luokat
 
```mermaid
classDiagram
 
    Chef <|-- ItalianChef
 
    class Chef {
        # string name
        +Chef(string)
        +makeSalad() void
        +makeSoup() void
    }
 
    class ItalianChef {
        +ItalianChef(string)
        +getName() string
        +makePasta() void
    }