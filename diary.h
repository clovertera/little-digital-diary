#ifndef DIARY_H
#define DIARY_H

#include <QString>
#include <QDateTime>
#include <QList>

// a sentence, such as "Today I had fun." with an associated QDateTime. should be editable.
class Sentence
{
public:
    Sentence(const QString &text);
    QString setText(const QString &revisedText);
    QString getText() const;
    QDateTime getTimestamp() const;
private:
    QString text;
    QDateTime timestamp;
};

// a collection of Sentences
class Entry
{
public:
    // TODO: use cpp standard arrays?
    void addSentence(const Sentence &newSentence);
    QList<Sentence> getSentences() const;
private:
    QList<Sentence> entrySentences;
};

// a collection of Entries, may be large, also has associated DateTime and passcode
class Diary
{
public:
    // long too much?
    Diary(const long size);
private:
    QDateTime diaryStart;
    QDateTime diaryEnd;
    QString passcode;
    long size;
};

#endif // DIARY_H
